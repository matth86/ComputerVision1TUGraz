
fnames=()
fnames[0]=01_gradientR.png
fnames[1]=02_binaryR.png
fnames[2]=03_edgesB.png
fnames[3]=04_edgesG.png
fnames[4]=05_edgesR.png
fnames[5]=06_translatedR.png
fnames[6]=07_alignedB.png
fnames[7]=08_alignedG.png
fnames[8]=09_combined.png
fnames[9]=10_combined_cropped.png
fnames[10]=11_cartoon.png

for tc in "boats" "cathedral" "chalice" "city" "emir" "generators" "three_girls" "train"
do
    if [ -d data/ref_x64/${tc} ]
    then
      mkdir -p dif/${tc}
      for fname in ${fnames[*]}
      do
        if [ -f output/${tc}/${fname} ]
        then
          convert data/ref_x64/${tc}/${fname} output/${tc}/${fname} -compose difference -composite -negate -contrast-stretch 0 dif/${tc}/${fname}
        else
          convert -size 300x300 xc:red dif/${tc}/${fname}
        fi
      done
    fi
done


