/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sscan.h
 * Author: nguyen trung duc
 *
 * Created on November 27, 2017, 10:18 AM
 */

#ifndef SSCAN_H
#define SSCAN_H

#include <sys/types.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdint.h>
#include <sys/time.h>
#include <string.h>
#include <time.h>  
#include <netdb.h>

#include <netinet/in.h>
#include <arpa/inet.h>

#include <fcntl.h>
#include <signal.h>
#include <errno.h>

#include <sys/select.h>
#include <sys/ioctl.h>

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <stack>
#include <queue>
#include <regex>
#include <vector>
#include <chrono>
#include <sstream>
#include <thread>

//define template
#define rep(i,n) 		for(int i = 0; i < n; ++i)
#define FOR(i,a,b) 		for(int i = (int) a; i <= (int)b; ++i)
#define pb 				push_back
#define X 				first
#define Y 				second
#define max(a,b) 		((a) > (b) ? (a) : (b))
#define min(a,b) 		((a) < (b) ? (a) : (b))


#define MST 			(-7)
#define UTC 			(0)
#define CCT 			(+8)

#define CONNECTING 		1
#define READRES1	 	2
#define READRES2 		4
#define DONE 			8

#define NOS_DEFAULT	 	100
#define TIMEOUT 		3

#define VERSION_MAJOR 	@Tutorial_VERSION_MAJOR@
#define VERSION_MINOR 	@Tutorial_VERSION_MINOR@

struct QUERY{
    std::string 	host;
    int 			port;
    int 			fd;
    int 			flags;
};


//prototypes for functions
std::vector<int> 	getListPort();
void  				getListIp(std::string namefile,std::vector<std::string> *listIP, std::vector< std::pair<std::string, std::string> > *listRange);
void  				getListPort(std::string namefile,std::vector<std::string> *listPort);
bool 				checkSocks(std::vector<std::pair<std::string, int> > checkList, std::ofstream& outF);
void 				int_to_ip(uint32_t ip, char * addr);
uint32_t 			ip_to_int (const char * ip);
std::vector<int> 	getListPortInt();
void 				time();
int 				getdate();

#endif /* SSCAN_H */


