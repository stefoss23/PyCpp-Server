from django.shortcuts import render
from django.http import HttpResponse
import json
from pycserv import *

def number(request):
    return HttpResponse(func())
    
def primes(request):
    return HttpResponse(json.dumps(get_primes()))
