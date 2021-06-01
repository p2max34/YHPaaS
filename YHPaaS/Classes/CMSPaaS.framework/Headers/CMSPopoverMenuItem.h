//
//  CMSPopoverMenuItem.h
//  PopoverMenuDemo
//
//  Created 吴演 on 2020/8/24.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSPopoverMenuItem : NSObject

@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *imageName;

/// 如果使用的是imageKey就用该属性
@property (nonatomic, copy) NSString *imageKey;

@end

NS_ASSUME_NONNULL_END
