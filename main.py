from fastapi import FastAPI
from fastapi.responses import FileResponse
import os
   
app = FastAPI()
   
@app.get("/")
async def root():
    return {"He":"Uds"}

@app.get("/1")
async def des():
    file_p="./e1.c"
    return FileResponse(file_p)

@app.get("/2")
async def des():
    file_p="./e2.c"
    return FileResponse(file_p)

@app.get("/3")
async def des():
    file_p="./e3.c"
    return FileResponse(file_p)

@app.get("/3k")
async def des():
    file_p="./e3k.cpp"
    return FileResponse(file_p)

@app.get("/4a")
async def des():
    file_p="./e4a.cpp"
    return FileResponse(file_p)

@app.get("/4ak")
async def des():
    file_p="./e4ak.cpp"
    return FileResponse(file_p)

@app.get("/4ak")
async def des():
    file_p="./e4ak.cpp"
    return FileResponse(file_p)

@app.get("/4b")
async def des():
    file_p="./e4b.cpp"
    return FileResponse(file_p)

@app.get("/5")
async def des():
    file_p="./e5.py"
    return FileResponse(file_p)

@app.get("/6")
async def des():
    file_p="./e6.py"
    return FileResponse(file_p)

@app.get("/7")
async def des():
    file_p="./e7.py"
    return FileResponse(file_p)

@app.get("/8")
async def des():
    file_p="./e8.cpp"
    return FileResponse(file_p)

@app.get("/9")
async def des():
    file_p="./e9.cpp"
    return FileResponse(file_p)
   
@app.get("/10")
async def des():
    file_p="./e10.py"
    return FileResponse(file_p)

@app.get("/11")
async def des():
    file_p="./e11.py"
    return FileResponse(file_p)

@app.get("/12")
async def des():
    file_p="./e12.cpp"
    return FileResponse(file_p)

@app.get("/13")
async def des():
    file_p="./e13.cpp"
    return FileResponse(file_p)