//
//  CMSSmartOrderListHeaderView.h
//  CMSPaaSBenchmark
//
//  Created by symbio on 2020/11/24.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSSmartOrderListHeaderView : UITableViewHeaderFooterView
/// 历史记录中的时间按钮
@property (nonatomic, strong) UIButton *timeButton;
/// 监控中的右侧按钮
@property (nonatomic, strong) UIButton *typeButton;
/// 历史记录设置时间选择
- (void)showTimeWithTimes:(NSArray<NSString *> *)times currentTime:(NSString *)currentTime;

- (void)showTitle:(NSString *)title buttonTitle:(NSString * __nullable)buttonTitle;
@end

NS_ASSUME_NONNULL_END
