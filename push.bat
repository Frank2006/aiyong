echo 'commit message?:'
set /p msg=请输入提交信息
if not defined msg (echo "msg" not defined ) else (
git add .
git commit -m "%msg%"
echo 'pushing...'
git push origin
echo 'end'
)
pause