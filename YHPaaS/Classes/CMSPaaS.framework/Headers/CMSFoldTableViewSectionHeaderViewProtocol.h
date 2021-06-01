//
//  CMSFoldTableViewSectionHeaderViewProtocol.h
//  Demo
//
//  Created by 吴演 on 2020/9/21.
//  Copyright © 2020年 CMS. All rights reserved.
//

typedef NS_ENUM(NSUInteger, CMSFoldState) {
    CMSFoldStateFold,
    CMSFoldStateExpand,
};

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CMSFoldTableViewSectionHeaderViewProtocol <NSObject>

/// 获取section对应的foldState
-(void)setSectionFoldState:(CMSFoldState)sectionFoldState;

/// headerView点击, 处理动画在此进行
-(void)sectionHeaderViewDidClick;

@end

NS_ASSUME_NONNULL_END
