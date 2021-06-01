//
//  CMSSelfSelectGroupProtocol.h
//  CMSPaaS
//
//  Created by liuyanliang on 2021/1/27.
//

@protocol CMSSelfSelectGroupProtocol <NSObject>

@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *groupId;
/// 股票数量
@property (nonatomic, assign) NSUInteger stockCount;

@property (nonatomic, readonly) BOOL canEdit;
@property (nonatomic, readonly) BOOL canEditStocks;
@property (nonatomic, readonly) BOOL canHidden;
@property (nonatomic, assign) BOOL hidden;

@end

