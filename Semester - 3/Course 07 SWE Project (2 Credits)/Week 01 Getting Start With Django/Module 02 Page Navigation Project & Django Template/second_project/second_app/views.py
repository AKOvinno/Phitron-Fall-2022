from django.http import HttpResponse
from django.shortcuts import render


# Create your views here.
def courses(request):
    return HttpResponse('''
                        <h1>This is Courses page</h1>
                        <button><a href = '/second_app/feedback/'> Feedback </a></button>
                        <button><a href = '/first_app/about/'> About </a></button>
                        <button><a href = '/first_app/contact/'> Contact </a></button>
                        <button><a href = '/'> Home </a></button>
                        ''')
def feedback(request):
    return HttpResponse('''
                        <h1>This is feedback page</h1>
                        <button><a href = '/second_app/courses/'> Courses </a></button>
                        <button><a href = '/first_app/about/'> About </a></button>
                        <button><a href = '/first_app/contact/'> Contact </a></button>
                        <button><a href = '/'> Home </a></button>
                        ''')