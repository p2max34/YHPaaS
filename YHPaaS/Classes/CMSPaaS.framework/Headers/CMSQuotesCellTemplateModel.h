//
//  CMSQuotesCellTemplateModel.h
//  CMSPaaS
//
//  Created by HJ on 2020/12/31.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSQuotesCellTemplateModel : NSObject
@property (nonatomic, copy) NSString      *templateName;
@property (nonatomic, strong) NSDictionary  *templateInfo;
@property (nonatomic, strong) NSDictionary  *data;

///自定义模块使用
@property (nonatomic, copy) NSString *customIdentifier;
@property (nonatomic, copy) NSString *customName;
@property (nonatomic, copy) NSString *customLeftImage;

@end
NS_ASSUME_NONNULL_END
