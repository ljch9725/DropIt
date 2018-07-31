//
//  DropitBehavior.h
//  Dropit
//
//  Created by 李键超 on 2018/7/27.
//  Copyright © 2018年 李键超. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DropitBehavior : UIDynamicBehavior

- (void)addItem:(id <UIDynamicItem>)item;
- (void)removeItem:(id <UIDynamicItem>)item;

@end
