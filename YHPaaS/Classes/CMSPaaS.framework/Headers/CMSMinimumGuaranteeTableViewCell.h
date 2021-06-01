//
//  CMSMinimumGuaranteeTableViewCell.h
//  CMSPaaS
//
//  Created by 李嘉 on 2020/10/14.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSMinimumGuaranteeTableViewCellStyle : NSObject

@property (nonatomic, copy) NSString *explain;
@property (nonatomic, copy) NSString *enableField;

@end

@interface CMSMinimumGuaranteeTableViewCell : UITableViewCell

@property (nonatomic, strong) CMSMinimumGuaranteeTableViewCellStyle *style;

@end

NS_ASSUME_NONNULL_END
