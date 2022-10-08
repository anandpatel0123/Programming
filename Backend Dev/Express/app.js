// const http = require('http');
// const { readFileSync } = require('fs')

// //get all files
// const homePage = readFileSync('./navbar-app/index.html')


// const server = http.createServer((req, res) => {
//     // console.log(req.method);
//     if (req.url == '/') {
//         res.writeHead(200, { 'content-type': 'text/html' })
//         res.write(homePage)
//         res.end();
//     }
//     else if (req.url == '/about') {
//         res.writeHead(200, { 'content-type': 'text/html' })
//         res.write('<h1>About page</h1>')
//         res.end();
//     } else {
//         res.writeHead(404, { 'content-type': 'text/html' })
//         res.write('<h1>Page not found!</h1>')
//         res.end();
//     }
// })

// server.listen(5000);

const express = require('express')
const app = express()
const path = require('path')

//it is used to setup middleware
app.use(express.static('./public'))

app.get('/', (req, res) => {
    res.sendFile(path.resolve(__dirname, './navbar-app/index.html'))
})

app.get('*', (req, res) => {
    res.status(404).send('resource not found')
})


app.listen(5000, () => {
    console.log('server is listening on port 5000')
})























