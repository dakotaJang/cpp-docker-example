https://devblogs.microsoft.com/cppblog/c-development-with-docker-containers-in-visual-studio-code/

build image
```
docker build -t dakotajang/clang .
```

Build cpp code
```
docker-compose up build
```

Run executable built in the previous step
```
docker-compose up run
```