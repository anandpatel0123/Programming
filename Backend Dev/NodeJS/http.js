const http = require('http')
const fs = require('fs');

// const server = http.createServer((req, res) => {
//     if (req.url === '/about') {
//         res.end('Here is our history')
//     }
//     if (req.url === '/') {
//         res.end('Welcome to our home page')
//     }
//     res.end(`
//     <h1>Oops!</h1>
//     `)

// })

// server.listen(5000) 

http.createServer((req,res)=>{
    const data = fs.createReadStream('./content/big.txt','utf-8')
    console.log(data);
    data.on('open',()=>{
        data.pipe(res);
    })
}).listen(5000)

