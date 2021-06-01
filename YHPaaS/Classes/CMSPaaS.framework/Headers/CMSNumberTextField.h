//
//  CMSNumberTextField.h
//  CMSPaaSBenchmark
//
//  Created by 吴演 on 2020/9/22.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,CMSNumberTextFieldValueType) {
    CMSNumberTextFieldValueTypeInput = 0,
    CMSNumberTextFieldValueTypePlus,
    CMSNumberTextFieldValueTypeMinus,
    CMSNumberTextFieldValueTypeSetValue
};

@interface CMSNumberTextField : UIView

@property (nonatomic, strong) UITextField *textField;
@property (nonatomic, strong) UIImage *plusImage;
@property (nonatomic, strong) UIImage *minusImage;

@property(nonatomic,copy) NSString *plusImageKey;
@property(nonatomic,copy) NSString *minusImageKey;

@property (nonatomic,nullable, strong) UIView *rightView;

@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, assign) BOOL editing;

@property (nonatomic, assign, readwrite) double value;
/// 不带符号的数值
@property (nonatomic, copy, readonly) NSString *pureValue;
@property (nonatomic, copy, readonly) NSString *text;
@property (nonatomic, assign) double minValue;
@property (nonatomic, assign) double maxValue;

@property (nonatomic, assign) UIEdgeInsets textFieldInsets;

// 精度:小数位数
@property (nonatomic, strong, nullable) NSNumber *numOfDecimal;
@property (nonatomic, assign) double stepValue;

@property(nonatomic, copy) NSString *suffix;
@property(nonatomic, copy) NSString *prefix;

@property(nonatomic, assign) BOOL autoSigned;

@property (nonatomic, copy) void(^autoSignedChangedBlock)(void);

@property (nonatomic, copy) NSString *defaultOperationValue;

@property (nonatomic, copy) void(^valueChangedBlock)(NSString *value, CMSNumberTextFieldValueType type);

- (instancetype)initWithFrame:(CGRect)frame;

-(void)clearTextField;

@end

NS_ASSUME_NONNULL_END
