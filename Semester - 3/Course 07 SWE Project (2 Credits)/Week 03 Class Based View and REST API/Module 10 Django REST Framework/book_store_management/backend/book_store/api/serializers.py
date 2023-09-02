from rest_framework import serializers # here serializers will work for serialize and deserialize
from api.models import BookStoreModel
class BookStoreSerializer(serializers.ModelSerializer):
    class Meta:
        model = BookStoreModel
        fields = '__all__'