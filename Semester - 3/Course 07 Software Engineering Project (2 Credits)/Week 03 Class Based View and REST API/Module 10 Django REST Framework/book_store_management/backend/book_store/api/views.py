from api.models import BookStoreModel
from api.serializers import BookStoreSerializer
from django.http import Http404
from rest_framework.views import APIView
from rest_framework.response import Response
from rest_framework import status


class BookListView(APIView):
    """
    List all model_data, or create a new model_data.
    """
    def get(self, request, format=None):
        model_data = BookStoreModel.objects.all() # bringing model data
        serializer = BookStoreSerializer(model_data, many=True) # converting the model data into serializer
        return Response(serializer.data)

    def post(self, request, format=None):
        serializer = BookStoreSerializer(data=request.data)
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data, status=status.HTTP_201_CREATED)
        return Response(serializer.errors, status=status.HTTP_400_BAD_REQUEST)
    
class BookListUpdateDelete(APIView):
    """
    Retrieve, update or delete a model_data instance.
    """
    def get_object(self, pk):
        try:
            return BookStoreModel.objects.get(pk=pk)
        except BookStoreModel.DoesNotExist:
            raise Http404

    def get(self, request, pk, format=None):
        model_data = self.get_object(pk)
        serializer = BookStoreSerializer(model_data)
        return Response(serializer.data)

    def put(self, request, pk, format=None):
        model_data = self.get_object(pk)
        serializer = BookStoreSerializer(model_data, data=request.data)
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data)
        return Response(serializer.errors, status=status.HTTP_400_BAD_REQUEST)

    def delete(self, request, pk, format=None):
        model_data = self.get_object(pk)
        model_data.delete()
        return Response(status=status.HTTP_204_NO_CONTENT)