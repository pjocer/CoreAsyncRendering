//
//  ANDispatchQueuePool.h
//  CoreAsyncRendering_Example
//
//  Created by Jocer on 2018/5/10.
//  Copyright © 2018年 pjocer. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef ANDispatchQueuePool_h
#define ANDispatchQueuePool_h

NS_ASSUME_NONNULL_BEGIN

/**
 A dispatch queue pool holds multiple serial queues.
 Use this class to control queue's thread count (instead of concurrent queue).
 */
@interface ANDispatchQueuePool : NSObject
- (instancetype)init UNAVAILABLE_ATTRIBUTE;
+ (instancetype)new UNAVAILABLE_ATTRIBUTE;
/**
 Creates and returns a dispatch queue pool.
 @param name       The name of the pool.
 @param queueCount Maxmium queue count, should in range (1, 32).
 @param qos        Queue quality of service (QOS).
 @return A new pool, or nil if an error occurs.
 */
- (instancetype)initWithName:(nullable NSString *)name queueCount:(NSUInteger)queueCount qos:(NSQualityOfService)qos;
/// Pool's name.
@property (nullable, nonatomic, readonly) NSString *name;
/// Get a serial queue from pool.
- (dispatch_queue_t)queue;

+ (instancetype)defaultPoolForQOS:(NSQualityOfService)qos;

@end

/// Get a serial queue from global queue pool with a specified qos.
extern dispatch_queue_t ANDispatchQueueGetForQOS(NSQualityOfService qos);

NS_ASSUME_NONNULL_END

#endif
