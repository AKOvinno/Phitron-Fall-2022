from rest_framework import serializers, viewsets
from first_app.models import Product, ProductReview


class ProductSerializer(serializers.ModelSerializer):
    reviews = serializers.StringRelatedField(many=True)
    class Meta: 
        model = Product
        fields = '__all__'
        
class ProductReviewSerializer(serializers.ModelSerializer):
    class Meta: 
        model = ProductReview
        fields = '__all__'