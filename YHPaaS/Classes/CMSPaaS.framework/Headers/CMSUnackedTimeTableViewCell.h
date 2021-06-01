//
//  CMSUnackedTimeTableViewCell.h
//  CMSPaaS
//
//  Created by 李嘉 on 2020/10/14.
//

#import <UIKit/UIKit.h>
#import "CMSBaseTextField.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSUnackedTimeTableViewCellStyle : NSObject

@property (nonatomic, copy) NSString *typeField;
@property (nonatomic, assign) NSInteger timeMax;
@property (nonatomic, assign) NSInteger value;
@property (nonatomic, assign) NSInteger inputValue;
@property (nonatomic, assign) NSInteger timeMini;
@property (nonatomic, copy) NSString *timeName;
@property (nonatomic, copy) NSString *timeField;
@property (nonatomic, copy) NSString *timeHint;
@property (nonatomic, copy) NSString *timePlaceHolder;
@property (nonatomic, assign) BOOL selected;
@property (nonatomic, copy) NSString *enableField;

@end

@interface CMSUnackedTimeTableViewCell : UITableViewCell

@property (nonatomic, strong) CMSUnackedTimeTableViewCellStyle *style;
@property (nonatomic, strong) CMSBaseTextField *affirmTimeTF;
@property (nonatomic, strong) UIButton *affirmTypeSelectBtn;

@property (nonatomic, copy) void(^valueChangedBlock)(NSString *value, NSString *confirm_select);
@property (nonatomic, copy) void(^selectChangedBlock)(NSString *value, NSString *selectName);

@end

NS_ASSUME_NONNULL_END
