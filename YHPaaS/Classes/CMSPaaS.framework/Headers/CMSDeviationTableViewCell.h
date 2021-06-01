//
//  CMSDeviationTableViewCell.h
//  CMSPaaS
//
//  Created by 李嘉 on 2020/10/14.
//

#import <UIKit/UIKit.h>
#import "CMSNumberTextField.h"


NS_ASSUME_NONNULL_BEGIN

@interface CMSDeviationTableViewCellStyle : NSObject

@property (nonatomic, copy) NSString *biasHintTop;
@property (nonatomic, copy) NSString *biasHintBottom;
@property (nonatomic, copy) NSString *biasSymbolLeft;
@property (nonatomic, copy) NSString *biasSymbolRight;
@property (nonatomic, assign) CGFloat   biasMax;
@property (nonatomic, assign) CGFloat   biasMini;
@property (nonatomic, copy) NSString *field;
@property (nonatomic, copy) NSString *enableField;

@end

@interface CMSDeviationTableViewCell : UITableViewCell

@property (nonatomic, strong) CMSDeviationTableViewCellStyle *style;
//@property (nonatomic, copy) void(^valueChangedBlock)(NSString *value);
@property (nonatomic, strong) CMSNumberTextField *biasTextField;

@end

NS_ASSUME_NONNULL_END
