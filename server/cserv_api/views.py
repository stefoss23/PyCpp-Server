from django.shortcuts import render
from django.http import HttpResponse
import json
from pycserv import *

def number(request):
    return HttpResponse(func())
    
def primes(request):
    
    num = int(request.GET.get('num'))

    return HttpResponse(json.dumps(get_primes(num)))
