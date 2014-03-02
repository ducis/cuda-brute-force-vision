rectVerts::Double->Double->[(Double,Double,Double)]
rectVerts x y = [(0,0,0),(0,y,0),(x,0,0),(x,y,0)]
rectTris c = [(0,1,2,c),(3,2,1,c)]
moveVert (dx,dy,dz) (x,y,z) = (x+dx,y+dy,z+dz)
offsetTri base (i,j,k,c) = (base+i,base+j,base+k,c) 
rect x y c = (rectVerts x y, rectTris c)
rectArray xs ys sx sy c = foldl comb ([],[]) [ (map (moveVert (dx,dy,0)) (rectVerts sx sy) , rectTris c) | dx<-xs,dy<-ys ]
comb (vs,ts) (vs',ts') = (vs++vs',ts++(map (offsetTri $ length vs) ts'))
gen_0 = comb (rect 3 3 0) $ rectArray xs ys 0.8 0.8 1
	where
	f = map (+0.1)
	xs = f [0..2]
	ys = f [0..2]
output (vs,ts) = writeFile "verts.txt" (f (map (+++(-1.5,-1.5,0)) vs)) >> writeFile "tris.txt" (f ts) where 
	f::Show a=>[a]->String
	f = unlines . map show
a *** (x,y,z) = (a*x,a*y,a*z)
(x,y,z) +++ (dx,dy,dz) = (x+dx,y+dy,z+dz)
