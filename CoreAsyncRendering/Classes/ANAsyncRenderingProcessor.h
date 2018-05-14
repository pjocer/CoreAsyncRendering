//
//  ANAsyncRenderingProcessor.h
//  CoreAsyncRendering_Example
//
//  Created by Jocer on 2018/5/14.
//  Copyright © 2018年 pjocer. All rights reserved.
//

#import <Foundation/Foundation.h>

#define ANARSP [ANAsyncRenderingProcessor sharedProcessor]

@interface ANAsyncRenderingProcessor : NSObject

+ (instancetype)sharedProcessor;

/**
 Do not add onerous tasks here.
 */
- (void)addTaskSimply:(dispatch_block_t)task;

@end
