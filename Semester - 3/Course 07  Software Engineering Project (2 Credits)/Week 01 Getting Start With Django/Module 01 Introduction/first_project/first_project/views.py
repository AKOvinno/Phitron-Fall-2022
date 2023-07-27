from django.http import HttpResponse


def home(request):
    return HttpResponse("<h1>Hello Laila! You are my first love</h1>")
def about(request):
    return HttpResponse("Hello this is my about page")