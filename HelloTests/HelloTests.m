//
//  HelloTests.m
//  HelloTests
//
//  Created by Derek Chou on 2015/11/6.
//  Copyright © 2015年 Derek Chou. All rights reserved.
//

#import <XCTest/XCTest.h>

@interface HelloTests : XCTestCase

@end

@implementation HelloTests

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testExample {
    // This is an example of a functional test case.
    // Use XCTAssert and related functions to verify your tests produce the correct results.
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

@end
