//
//  UILabel+CMSBind.h
//  KVODemo
//
//  Created by sway on 2020/9/25.
//  Copyright © 2020 sway. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^CMSBindReturnValueBlock) (id returnValue);

@interface UILabel (CMSBind)
@property (nonatomic,copy) CMSBindReturnValueBlock returnValueCallBack;

@end


