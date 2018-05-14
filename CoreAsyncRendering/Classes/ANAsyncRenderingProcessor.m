//
//  ANAsyncRenderingProcessor.m
//  CoreAsyncRendering_Example
//
//  Created by Jocer on 2018/5/14.
//  Copyright © 2018年 pjocer. All rights reserved.
//

#import "ANAsyncRenderingProcessor.h"
#import <libkern/OSAtomic.h>

static int32_t value = 0;

void IncreaseSniffer() {
    OSAtomicIncrement32(&value);
}

@implementation ANAsyncRenderingProcessor

+ (instancetype)sharedProcessor {
    static dispatch_once_t onceToken;
    static ANAsyncRenderingProcessor *processor = nil;
    dispatch_once(&onceToken, ^{
        processor = [ANAsyncRenderingProcessor new];
    });
    return processor;
}

- (void)addTaskSimply:(dispatch_block_t)task {
    
}

@end
