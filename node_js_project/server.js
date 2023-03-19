const express = require("express");
const app = express(); 
const port = 5000 || process.env.PORT;
const cors = require('cors')
const bodyParser = require('body-parser')
const mongoose = require("mongoose");
const MOVIE_SCHEMA = require("./MOVIE_SCHEMA")
const dbUrl = "mongodb+srv://Gangadevi:Gangz98@cluster0.gzjkv6r.mongodb.net/MovieList?retryWrites=true&w=majority";

app.use(express.json());

app.listen(port,(err) => {
    if(err){
        console.log("server starting failed at port " + port);
    }
    else{
        console.log("Server started successfully at port " + port);
    }
});
// To connect to the Database
mongoose.set("strictQuery", false)
mongoose.connect(dbUrl,{useNewUrlParser: true}, (err) => {
    if(err)
    console.log(err);
    else
    console.log("Connected to Database");
})

app.get('/movies',(req,res) =>{
    res.send("welcome to movieList");
});


const Movie = require('./MOVIE_SCHEMA')

//API to create a movie
app.post('/movies/addMovie', async (req, res) => {
    console.log(req.body)
    const movie_detail = {
        id: req.body.id,
        title: req.body.title
      };
      const movie = new MOVIE_SCHEMA(movie_detail);
      // user.save().then((resp) => {
      //   console.log(resp);
      // });
      const result = await movie.save();
      console.log(result);
      if (result) {
        res.status(200).send({ msg: "movie added to the database" });
      } else {
        res.status(400).send({ msg: "Some problem occured" });
      }
    
})

//API to get movie details
app.get('/movies/getMovies',async (req, res) => {
    try {
      // finding all the movie in the table
      const movies = await Movie.find()
      // To check in the console 
      console.log(movies)
      res.send(movies)
     }catch (err) {
        res.send({ message: err })
     } 
    })

//API to get a movie based on id
app.get('/movies/getMovieBasedOnID', async (req, res) => {
    try{
        // finding a movie based on id in the database
      const movies = await Movie.find({id:req.body.id})
      // To check in the console 
      console.log(movies)
      res.send(movies)
     }catch (err) {
        res.send({ message: err })
     } 
})    

//API to get a movie based on title
app.get('/movies/getMovieBasedOnTitle', async (req, res) => {
    try{
        // finding a movie based on title in the database
      const movies = await Movie.find({title:req.body.title})
      // To check in the console 
      console.log(movies)
      res.send(movies)
     }catch (err) {
        res.send({ message: err })
     } 
}) 

//API to delete a movie based on id
app.post('/movies/delete', async (req, res) => {
    try{
      const result = await Movie.deleteOne({id:req.body.id})
    if (result.deletedCount === 1) {
      res.send("Successfully deleted a movie.");
    } else {
      res.send("No movies found");
    }
     }catch (err) {
        res.send({ message: err })
     } 
}) 

//API to update the movie details
app.post('/movies/update', async (req, res) => {
    const filter = {id:req.body.id};
    const update = {title:req.body.title};
    try{
      const result = await Movie.findOneAndUpdate(filter,update)
      console.log(result)
      res.send({ message: "Movie updated successfully"})
     }catch (err) {
        res.send({ message: err })
     } 
}) 
 
