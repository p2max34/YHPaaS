//
//  CMSTargetDataLabel.h
//  CMSBarDemo
//
//  Created 吴演 on 2020/8/28.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, CMSTargetDataLabelType) {
    CMSTargetDataLabelTypeNormal = 0,
    CMSTargetDataLabelTypeColorValueBg,
    CMSTargetDataLabelTypeColorClearBg
};

@interface CMSTargetDataLabel : UIView
@property (nonatomic, strong) UILabel *nameLabel;
@property (nonatomic, strong) UILabel *valueLabel;
+ (instancetype)labelWithType:(CMSTargetDataLabelType)type;
- (instancetype)initWithFrame:(CGRect)frame type:(CMSTargetDataLabelType)type;

- (void)setName:(NSString *)name;
- (void)setValue:(NSString *)value;

- (void)setNameFont:(UIFont *)font;
- (void)setValueFont:(UIFont *)font;

- (void)setNameColor:(UIColor *)color;
- (void)setValueColor:(UIColor *)color;

@end

NS_ASSUME_NONNULL_END
