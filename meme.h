// SPDX-License-Identifier: MIT
/*
 *
 * This file is part of meme.h, with ABSOLUTELY NO WARRANTY.
 *
 * MIT License
 *
 * Copyright (c) 2023 Moe-hacker
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 *
 */
#include <stdio.h>
#include <stdlib.h>
// 虽然false应该是((_Bool)+0u)，但!true显然更抽象。
#define true ((_Bool)+1u)
#define false !true
// 众所周知一坤=2.5
#define kun ((float)2.5F)
// 一花西币为79CNY
#define huaxi ((int)79)
// 众所周知1141514和1919810是两个经典大幻数
#define number ((int)114514)
#define bignumber ((int)1919810)
// 不需要多解释
#define 寄 exit(1)
#define 淦(发生肾磨石了) printf("\033[31m握草，%s\n\033[0m",发生肾磨石了);