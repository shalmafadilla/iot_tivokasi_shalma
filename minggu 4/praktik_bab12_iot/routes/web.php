<?php


use Illuminate\Support\Facades\Route;
use App\Http\Controllers\GraphController;


Route::get('/', [GraphController::class, 'index'])->name('graph');
