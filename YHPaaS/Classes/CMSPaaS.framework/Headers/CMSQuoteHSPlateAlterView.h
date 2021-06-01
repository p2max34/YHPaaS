//
//  CMSQuoteHSPlateAlterView.h
//  CMSPaaS
//
//  Created by 李嘉 on 2021/1/5.
//
#import <UIKit/UIKit.h>
//#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuoteHSPlateAlterView : UIView

/// 添加沪深全市场选择界面
/// @param titleArray 可选择的板块数组
/// @param selectTitle 初始选择的板块名称
/// @param complated 选择的板块名称回调
+ (void)alertWithTitleArray:(NSArray<NSString *> *)titleArray SelectTitle:(NSString *)selectTitle complated:(void (^)(NSString *selectTitle))complated;

@end

NS_ASSUME_NONNULL_END
