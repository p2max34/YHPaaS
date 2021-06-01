//
//  CMSMonitoringPickerView.h
//  CMSPaaS
//
//  Created by 李嘉 on 2020/10/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSMonitoringPickerView : UIView
@property (nonatomic, strong) UIView *contentView;
///选择器
@property (nonatomic, strong) UIPickerView *pickerView;
///取消按钮
@property (nonatomic, strong) UIButton *cancelButton;
///确定按钮
@property (nonatomic, strong) UIButton *confirmButton;
///标题
@property (nonatomic, strong) UILabel *titleLabel;
///选择器的高度
@property (nonatomic, assign) CGFloat pickerViewHeight;

/**
 *  创建视图,初始化视图时初始数据
 */
- (void)initPickView;
/**
 *  确认按钮的点击事件
 */
- (void)clickConfirmButton;
/**
 *  pickerView的显示
 */
- (void)show;
/**
 *  移除pickerView
 */
- (void)disMiss;

@end

NS_ASSUME_NONNULL_END
