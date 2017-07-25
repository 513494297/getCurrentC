//
//  NSObject+CurrentC.h
//  WarmHome
//
//  Created by 方 on 17/6/29.
//
//

#import <Foundation/Foundation.h>

@interface NSObject (CurrentC)

/// 获取当前控制器
- (UIViewController *)getCurrentViewController;

@end
