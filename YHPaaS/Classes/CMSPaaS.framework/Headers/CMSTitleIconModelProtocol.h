//
//  CMSTitleIconModelProtocol.h
//  CMSPaaS
//
//  Created by HJ on 2021/2/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CMSTitleIconModelProtocol <NSObject>
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *icon;
@property (nonatomic, copy) NSString *uri;
@end

NS_ASSUME_NONNULL_END
