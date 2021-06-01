//
//  CMSPatternStringDataBinder.h
//  KVODemo
//
//  Created by sway on 2020/9/24.
//  Copyright © 2020 sway. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CMSBasePatternDataBinder.h"
@class CMSPatternStringDataModel;

@interface CMSPatternStringDataBinder : CMSBasePatternDataBinder

@property(nonatomic,copy) CMSParttenValueChangedCallback valueChangedCallback;

@end

