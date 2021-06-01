//
//  CMSQuoteDetailListViewController.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/3.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuoteDetailListViewController : UIViewController

//@property (nonatomic, copy) NSDictionary *paramDict;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *setDomain;
@property (nonatomic, copy) NSString *target;
@property (nonatomic, copy) NSString *sortProperty;
@property (nonatomic, copy) NSString *order;
@property (nonatomic, copy) NSString *dataKey;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *headerKey;
@property (nonatomic, copy) NSString *param;
@property (nonatomic, copy) NSString *subCode;

@property (nonatomic, copy) NSString *configPath;
@property (nonatomic, copy) NSString *segmentId;//表头ID类型
@property (nonatomic, copy) NSString *pageId;   //当前导航栏ID类型

@end

NS_ASSUME_NONNULL_END
