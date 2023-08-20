from django.http import HttpResponse
from django.shortcuts import render  # we need render for using template

# Create your views here.

def home(request):
    return HttpResponse("<h1>Hello Laila! You are my first love</h1>")
def about(request):
    return HttpResponse("Hello this is my about page")
