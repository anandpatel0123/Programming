// Modules built in
// OS, FS, Path, HTTP

// OS to interact with operationg system

// const os = require('os')

// // info about current user
// const user = os.userInfo()
// console.log(user);

// //method return the system uptime in seconds
// console.log(`The system uptime is ${os.uptime()} seconds`);

// const currentOS = {
//     name: os.type(),
//     release: os.release(),
//     totelMem: os.totalmem(),
//     freeMem: os.freemem(),
// }

// console.log(currentOS);

//Path module
// const path = require('path')

// console.log(path.sep);

// //normalize path
// const filePath = path.join('/content','subfolder','test.txt')
// console.log(filePath);

// //base name of a path
// const base = path.basename(filePath)
// console.log(base);

// // absolute path
// const absolute = path.resolve(__dirname,'content','subfolder','test.txt');
// console.log(absolute);

//FS Module - Sync
const { readFileSync, writeFileSync } = require("fs");

const first = readFileSync("./content/first.txt", "utf8");
const second = readFileSync("./content/second.txt", "utf8");

// overwrite into the file
// writeFileSync('./content/result-syncBuiltinESMExports.txt',`Here is the result : ${first}, ${second}`)
writeFileSync(
    "./content/result-syncBuiltinESMExports.txt",
    `Here is the result : ${first}, ${second}`,
    { flag: "a" }
);

console.log(first, second);

// FS - Async
const { readFile, writeFile } = require("fs");
// if we don't add utf8 it will give buffer
readFile("./content/first.txt", "utf8", (err, result) => {
    if (err) {
        return;
    }
    const first = result;

    readFile("./content/second.txt", "utf8", (err, result) => {
        if (err) {
            return;
        }
        const seccond = result;

        writeFile(
            "./content/result-async.txt",
            `Here is the result : ${first}, ${second}`,
            (err, result) => {
                if (err) {
                    console.log(err);
                    return;
                }
                console.log(result)
            }
        );
    });
});
