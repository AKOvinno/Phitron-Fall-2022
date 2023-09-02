from django.http import HttpResponse

#from django.shortcuts import render

# Create your views here.

def contact(request):
    return HttpResponse('''
                        <h1>This is contact page</h1>
                        <button><a href = '/first_app/about/'> About </a></button>
                        <button><a href = '/second_app/courses/'> Courses </a></button>
                        <button><a href = '/second_app/feedback/'> Feedback </a></button>
                        <button><a href = '/'> Home </a></button>
                        ''')
def about(request):
    return HttpResponse('''
                        <h1>This is about page</h1>
                        <button><a href = '/first_app/contact/'> Contact </a></button>
                        <button><a href = '/second_app/courses/'> Courses </a></button>
                        <button><a href = '/second_app/feedback/'> Feedback </a></button>
                        <button><a href = '/'> Home </a></button>
                        ''')
