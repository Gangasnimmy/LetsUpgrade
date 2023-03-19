const mongoose = require("mongoose");

const schema = new mongoose.Schema({
    id: {
        type: Number,
        required: true
    },
    title: {
        type: String,
        required: true
    },

});

const MOVIE_SCHEMA = mongoose.model("MOVIE", schema);
module.exports = MOVIE_SCHEMA;