
//分发饼干，饼干尺寸大于等于孩子胃口，输出满足数量。
class Solution {
    public int findContentChildren(int[] g, int[] s) {
Arrays.sort(g);
Arrays.sort(s);
int gg=0;
int ss=0;
while(gg<g.length&&ss<s.length)
 {
     if(g[gg]<=s[ss]){
     gg=gg+1;
     }
ss++;
     ;}
 return gg;
    }
}
