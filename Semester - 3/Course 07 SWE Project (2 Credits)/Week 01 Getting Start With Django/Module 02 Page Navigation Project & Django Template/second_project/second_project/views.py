from django.http import HttpResponse


def home(request): # we have to give this request parameter
    return HttpResponse('''
                        <h1> This is my home page </h1>
                        <button><a href = '/first_app/about/'> About </a></button>
                        <button><a href = '/second_app/courses/'> Courses </a></button>
                        <button><a href = '/second_app/feedback/'> Feedback </a></button>
                        <button><a href = '/first_app/contact/'> Contact </a></button>
                        ''')
