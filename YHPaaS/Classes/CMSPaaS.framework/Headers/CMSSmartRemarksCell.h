//
//  CMSSmartRemarksCell.h
//  CMSPaaSBenchmark
//
//  Created by 吴演 on 2020/10/13.
//  Copyright © 2020 CMS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMSSmartTradeCommonDefine.h"
NS_ASSUME_NONNULL_BEGIN

// Config
@interface CMSSmartRemarksCellStyle : NSObject
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, assign) NSInteger maxLimit;
@property (nonatomic, copy) NSString *field;
@end

@interface CMSSmartRemarksCell : UITableViewCell
@property (nonatomic, strong) CMSSmartRemarksCellStyle *style;
@property (nonatomic, strong) UITextView *textView;
@property (nonatomic, copy) void(^contentBlock)(NSString *content);

- (void)setTextFieldContent:(NSString *)content;
@end

NS_ASSUME_NONNULL_END
