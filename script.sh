#!/bin/bash
wall  "
#Architecture: $(uname -a)
#Memory Usage: $(free -m | awk '{if ($1=="Mem:") {a=($3*100)/$2;printf("%d/%dMb (%.2f%%)\n",$3,$2, a)}}')
#CPU physical: $(grep "physical id" /proc/cpuinfo | sort -u | wc -l)
#vCPU: $(grep "processor" /proc/cpuinfo | wc -l)
#Disk Usage: $(df -h --total | awk '$1 == "total" {sub("M", "", $3); printf("%d", $3)}')/$(df -h --total | awk '{if($1=="total") printf("%dGb (%.2f%%)\n", $2 ,$5)}')
#CPU load: $(mpstat -P ALL 1 1 | grep all | awk '{printf("%.1f%",100-$13);exit}')
#Lastboot: $(who -b | awk '{if($1=="system") printf("%s %s\n",$3,$4)}')
#LVM use: $([ $(lsblk | grep -c "lvm") -eq 0 ] && echo "no" || echo "yes")
#Connections TCP: $(netstat | grep ESTABLISHED | wc -l) ESTABLISHED
#User log: $(users | wc -w)
#Network: IP $(hostname -I)($(ip link show | grep "ether" | awk '{print($2)}'))
#Sudo : $(journalctl -q  _COMM=sudo | grep "COMMAND" | wc -l) cmd"
