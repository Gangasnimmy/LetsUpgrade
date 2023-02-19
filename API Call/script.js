function callapi1(){
    fetch('https://jsonplaceholder.typicode.com/users/1')
        .then(res => {
             if(!res.ok){
                throw res.status;
            } 
            return res.json();
        })
        .then(data => console.log(data.name))
        .catch(err => {
            alert(err + ' Oops something went wrong')
        })
}

function callapi2(){
    fetch('https://jsonplaceholder.typicode.com/users/2')
        .then(res => {
             if(!res.ok){
                throw res.status;
            } 
            return res.json();
        })
        .then(data => {
            console.log(data.name)
        })
        .catch(err => {
            alert(err + ' Oops something went wrong')
        })
}

function callapi3(){
    fetch('https://jsonplaceholder.typicode.com/users/3')
        .then(res => {
             if(!res.ok){
                throw res.status;
            } 
            return res.json();
        })
        .then(data => console.log(data.name))
        .catch(err => {
            alert(err + ' Oops something went wrong')
        })
}

function callapi4(){
    fetch('https://jsonplaceholder.typicode.com/users/4')
        .then(res => {
             if(!res.ok){
                throw res.status;
            } 
            return res.json();
        })
        .then(data => console.log(data.name))
        .catch(err => {
            alert(err + ' Oops something went wrong')
        })
}

function callapi5(){
    fetch('https://jsonplaceholder.typicode.com/users/5')
        .then(res => {
             if(!res.ok){
                throw res.status();
            } 
            return res.json();
        })
        .then(data => console.log(data.name))
        .catch(err => {
            alert(err + ' Oops something went wrong')
        })
}