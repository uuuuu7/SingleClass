//
//  ViewController.m
//  SingleClass
//
//  Created by Bo on 16/5/25.
//  Copyright © 2016年 Simple. All rights reserved.
//

#import "ViewController.h"
#import "SingleClass.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    SingleClass *single1 = [SingleClass shareInstance];
    SingleClass *single2 = [SingleClass shareInstance];
    SingleClass *single3 = [SingleClass shareInstance];
    SingleClass *single4 = [[SingleClass alloc]init];
    NSLog(@"%p%p%p%p",single1,single2,single3,single4);
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
