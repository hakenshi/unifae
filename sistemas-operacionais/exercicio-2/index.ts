import fs from "node:fs";
const fileName = "texto.txt";
const newFileName = "texteso.txt";
const file = fs.existsSync(fileName);

if (!file) {
  fs.writeFileSync(fileName, "hello world");
  console.log(`Writing file: ${fileName}`);
}

console.log(`Renaming file: ${fileName} to ${newFileName}`);
fs.renameSync(fileName, newFileName);

