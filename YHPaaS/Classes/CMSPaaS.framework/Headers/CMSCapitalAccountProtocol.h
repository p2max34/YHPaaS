//
//  CMSCapitalAccountProtocol.h
//  CMSPaaS
//
//  Created by liuyanliang on 2021/4/22.
//

#import <Foundation/Foundation.h>


@protocol CMSCapitalAccountProtocol <NSObject>

@property (nonatomic, copy) NSString *code;
@property (nonatomic, assign) BOOL isLocked;
@property (nonatomic, readonly) NSString *shortTypeName;

@end

