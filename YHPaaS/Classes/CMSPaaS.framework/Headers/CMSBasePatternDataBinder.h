//
//  CMSBasePatternDataBinder.h
//  CMSPaaS
//
//  Created by HJ on 2020/11/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^CMSParttenValueChangedCallback)(NSString *content,id requestResult);

@interface CMSBasePatternDataBinder : NSObject

@property(nonatomic,copy) CMSParttenValueChangedCallback parttenValueChangedCallback;

+ (instancetype)dataBinderWithContent:(NSString *)content complete:(nonnull CMSParttenValueChangedCallback)complete;

@end

NS_ASSUME_NONNULL_END
