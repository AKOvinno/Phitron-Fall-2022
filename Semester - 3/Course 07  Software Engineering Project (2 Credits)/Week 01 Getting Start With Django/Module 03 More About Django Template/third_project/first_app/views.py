from django.shortcuts import render


# Create your views here.
def contact(request):
    return render(request, './first_app/index.html', {"name" : "Ovinno", "marks" : 86, "list" : [24, 3, 10, 5], "blog" : "Lorem, ipsum dolor sit amet consectetur adipisicing elit. Nulla commodi aliquam natus deleniti in dolorem repellendus culpa, tenetur voluptas quod, accusantium magni neque. Accusantium, soluta."})

# {'courses': [
#         {
#             'id': 1,
#             'course' : 'C',
#             'teacher' : 'Rahim'
#         },
#         {
#             'id': 2,
#             'course' : 'C++',
#             'teacher' : 'Karim'
#         },
#         {
#             'id': 3,
#             'course' : 'Python',
#             'teacher' : 'Fahim'
#         },
#     ]}
