//
//  CMSInflexionRangeTableViewCell.h
//  CMSPaaS
//
//  Created by 李嘉 on 2020/10/14.
//

#import <UIKit/UIKit.h>
#import "CMSNumberTextField.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSInflexionRangeTableViewCellStyle : NSObject

@property (nonatomic, assign) double turningMax;
@property (nonatomic, assign) double turningMini;              
@property (nonatomic, copy) NSString *field;
@property (nonatomic, copy) NSString *turningHint;
@property (nonatomic, copy) NSString *turningPlaceHolder;
@property (nonatomic, copy) NSString *enableField;

@end

@interface CMSInflexionRangeTableViewCell : UITableViewCell

@property (nonatomic, strong) CMSInflexionRangeTableViewCellStyle *style;
@property (nonatomic, strong) CMSNumberTextField *numberTextField;

@end

NS_ASSUME_NONNULL_END
